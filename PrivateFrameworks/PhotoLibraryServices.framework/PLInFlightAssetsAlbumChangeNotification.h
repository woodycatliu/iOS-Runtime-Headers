/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAlbumChangeNotification, NSMutableSet, NSOrderedSet, PLInFlightAssetsAlbum;

@interface PLInFlightAssetsAlbumChangeNotification : PLAlbumChangeNotification  {
    PLInFlightAssetsAlbum *_album;
    PLAlbumChangeNotification *_backingNotification;
    NSOrderedSet *_oldOIDs;
    NSMutableSet *_uniquedOIDs;
    BOOL _keyAssetDidChange;
}

@property(readonly) PLInFlightAssetsAlbum * album;
@property(readonly) PLAlbumChangeNotification * backingNotification;
@property(readonly) NSOrderedSet * oldOIDs;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)description;
- (void)dealloc;
- (id)object;
- (id)oldOIDs;
- (id)backingNotification;
- (id)initWithInFlightAssetsAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (id)_diffDescription;
- (id)album;

@end