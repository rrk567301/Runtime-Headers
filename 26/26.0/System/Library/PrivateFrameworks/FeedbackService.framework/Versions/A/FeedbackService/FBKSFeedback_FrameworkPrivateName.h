@class NSString, NSDate;

@interface FBKSFeedback_FrameworkPrivateName : NSObject {
    void /* function */ formIdentifier;
    void /* unknown type, empty encoding */ submissionDate;
    void /* function */ build;
}

@property (nonatomic, readonly) NSString *formIdentifier;
@property (nonatomic, readonly) NSDate *submissionDate;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) long long id;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
