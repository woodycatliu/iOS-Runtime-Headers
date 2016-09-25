/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLTimePoint : PBCodable <NSCopying> {
    struct { 
        unsigned int time : 1; 
        unsigned int type : 1; 
    }  _has;
    double  _time;
    int  _type;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) BOOL hasType;
@property (nonatomic) double time;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTime;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTime:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setTime:(double)arg1;
- (void)setType:(int)arg1;
- (double)time;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end