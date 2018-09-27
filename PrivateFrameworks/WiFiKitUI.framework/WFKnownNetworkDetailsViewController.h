/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFKnownNetworkDetailsViewController : UITableViewController {
    NSDate * _dateAdded;
    NSDateFormatter * _dateFormatter;
    NSDate * _dateLastJoined;
    NSArray * _geoTagsArray;
    bool  _isHidden;
    <WFKnownNetworksViewControllerDelegate> * _knownNetworksDelegate;
    NSString * _password;
    NSDictionary * _scoreDict;
    NSString * _securityType;
    NSString * _ssid;
}

@property (nonatomic, retain) NSDate *dateAdded;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSDate *dateLastJoined;
@property (nonatomic, retain) NSArray *geoTagsArray;
@property (nonatomic) bool isHidden;
@property (nonatomic) <WFKnownNetworksViewControllerDelegate> *knownNetworksDelegate;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSDictionary *scoreDict;
@property (nonatomic, retain) NSString *securityType;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)dateAdded;
- (id)dateFormatter;
- (id)dateLastJoined;
- (id)geoTagsArray;
- (bool)isHidden;
- (id)knownNetworksDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)password;
- (id)scoreDict;
- (id)securityType;
- (void)setDateAdded:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateLastJoined:(id)arg1;
- (void)setGeoTagsArray:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setKnownNetworksDelegate:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setScoreDict:(id)arg1;
- (void)setSecurityType:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end