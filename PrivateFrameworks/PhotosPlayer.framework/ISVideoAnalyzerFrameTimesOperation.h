/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVideoAnalyzerFrameTimesOperation : NSOperation {
    AVAsset * _asset;
    AVAssetReader * _assetReader;
    AVAssetReaderSampleReferenceOutput * _assetReaderOutput;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)_handleAssetDidLoadValues;
- (id)asset;
- (id)initWithAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)main;
- (id /* block */)resultHandler;

@end