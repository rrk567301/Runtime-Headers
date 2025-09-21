@class NSString;

@interface RuntimeConfig : NSObject

@property (nonatomic) BOOL audioDebug;
@property (nonatomic) BOOL batchDecode;
@property (nonatomic) BOOL preKeywordSilence;
@property (nonatomic) BOOL duringKeywordSilence;
@property (nonatomic) BOOL postKeywordSilence;
@property (nonatomic) BOOL secondPass;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
