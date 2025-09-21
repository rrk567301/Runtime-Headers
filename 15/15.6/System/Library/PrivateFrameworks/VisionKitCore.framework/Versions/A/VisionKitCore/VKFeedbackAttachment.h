@class NSString;

@interface VKFeedbackAttachment : NSObject

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) char isOptional;

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 label:(id)a1 isOptional:(char)a2;

@end
