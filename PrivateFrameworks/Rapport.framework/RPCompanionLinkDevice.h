/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding> {
    bool  _btPipeConnected;
    bool  _changed;
    bool  _daemon;
    NSString * _deviceColor;
    unsigned int  _flags;
    NSString * _groupID;
    NSUUID * _homeKitIdentifier;
    NSString * _idsPersonalDeviceIdentifier;
    NSUUID * _mediaSystemIdentifier;
    NSUUID * _mediaSystemIdentifierEffective;
    NSString * _mediaSystemName;
    int  _mediaSystemRole;
    int  _mediaSystemRoleEffective;
    int  _mediaSystemState;
    NSUUID * _pairingIdentifier;
    NSString * _password;
    bool  _personal;
    int  _personalDeviceState;
    int  _personalRequestsState;
    NSString * _publicIdentifier;
    NSString * _role;
    NSString * _roomName;
    NSDictionary * _siriInfo;
    NSString * _sourceVersion;
}

@property (nonatomic) bool btPipeConnected;
@property (nonatomic) bool changed;
@property (nonatomic) bool daemon;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, readonly, copy) NSString *effectiveIdentifier;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, copy) NSUUID *homeKitIdentifier;
@property (nonatomic, copy) NSString *idsPersonalDeviceIdentifier;
@property (nonatomic, copy) NSUUID *mediaSystemIdentifier;
@property (nonatomic, copy) NSUUID *mediaSystemIdentifierEffective;
@property (nonatomic, copy) NSString *mediaSystemName;
@property (nonatomic) int mediaSystemRole;
@property (nonatomic) int mediaSystemRoleEffective;
@property (nonatomic) int mediaSystemState;
@property (nonatomic, copy) NSUUID *pairingIdentifier;
@property (nonatomic, copy) NSString *password;
@property (getter=isPersonal, nonatomic) bool personal;
@property (nonatomic) int personalDeviceState;
@property (nonatomic) int personalRequestsState;
@property (nonatomic, copy) NSString *publicIdentifier;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSDictionary *siriInfo;
@property (nonatomic, copy) NSString *sourceVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)btPipeConnected;
- (bool)changed;
- (bool)daemon;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceColor;
- (id)effectiveIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)groupID;
- (id)homeKitIdentifier;
- (id)idsPersonalDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isPersonal;
- (id)mediaSystemIdentifier;
- (id)mediaSystemIdentifierEffective;
- (id)mediaSystemName;
- (int)mediaSystemRole;
- (int)mediaSystemRoleEffective;
- (int)mediaSystemState;
- (id)pairingIdentifier;
- (id)password;
- (int)personalDeviceState;
- (int)personalRequestsState;
- (id)publicIdentifier;
- (id)role;
- (id)roomName;
- (void)setBtPipeConnected:(bool)arg1;
- (void)setChanged:(bool)arg1;
- (void)setDaemon:(bool)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHomeKitIdentifier:(id)arg1;
- (void)setIdsPersonalDeviceIdentifier:(id)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setMediaSystemIdentifierEffective:(id)arg1;
- (void)setMediaSystemName:(id)arg1;
- (void)setMediaSystemRole:(int)arg1;
- (void)setMediaSystemRoleEffective:(int)arg1;
- (void)setMediaSystemState:(int)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPersonal:(bool)arg1;
- (void)setPersonalDeviceState:(int)arg1;
- (void)setPersonalRequestsState:(int)arg1;
- (void)setPublicIdentifier:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSiriInfo:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)siriInfo;
- (id)sourceVersion;
- (unsigned int)updateWithBonjourDevice:(id)arg1;

@end