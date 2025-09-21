@class NSError, NSString, TSPData;

@interface TSDImageCompatibilityChecker : NSObject <TSDMediaCompatibilityChecker> {
    TSPData *mImageData;
    _Atomic char mCancelled;
}

@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic) long long compatibilityLevel;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
