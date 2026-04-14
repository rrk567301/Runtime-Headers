@class NSString, PXVideoContentProviderLoadingResult, NSDictionary, NSNumber;

@interface PXVideoContentProvider : PXObservable

@property (retain, nonatomic) PXVideoContentProviderLoadingResult *loadingResult;
@property (nonatomic) double loadingProgress;
@property (retain, nonatomic) NSNumber *videoAspectRatio;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSDictionary *analyticsPayload;
@property (readonly, nonatomic) long long audioSessionKind;
@property (readonly, nonatomic) BOOL mayContainAudio;

- (void)cancelLoading;
- (void).cxx_destruct;
- (id)mutableChangeObject;
- (void)beginLoadingWithPriority:(long long)a0;
- (void)makeUniqueContentIdentifier;

@end
