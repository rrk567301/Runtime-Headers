@class NSString, SASBookendNextAnimationData;

@interface SASBookendAnimationFinishedData : NSObject {
    void /* function */ currentLanguage;
}

@property (nonatomic, readonly) NSString *currentLanguage;
@property (nonatomic, readonly) BOOL isLastLanguage;
@property (nonatomic, readonly) SASBookendNextAnimationData *nextAnimationData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCurrentLanguage:(id)a0 isLastLanguage:(BOOL)a1 nextAnimationData:(id)a2;

@end
