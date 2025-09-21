@class NSNumber, NSDictionary, NSString;

@interface FBKSCustomBehavior : NSObject

@property (nonatomic) char makeVisible;
@property (nonatomic) char notifyOnUpload;
@property (retain, nonatomic) NSNumber *formId;
@property (retain, nonatomic) NSDictionary *answers;
@property (nonatomic) char launchNewDraft;
@property (nonatomic) char isCaptive;
@property (readonly, copy, nonatomic) NSString *description;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
