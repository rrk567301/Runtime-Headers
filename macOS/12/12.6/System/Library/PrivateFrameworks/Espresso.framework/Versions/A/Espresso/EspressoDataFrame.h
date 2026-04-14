@class NSString, NSMutableDictionary, NSArray;

@interface EspressoDataFrame : NSObject

@property (retain) NSMutableDictionary *inputAttachments;
@property (retain) NSMutableDictionary *outputAttachments;
@property (retain) NSMutableDictionary *groundTruthAttachments;
@property (retain) NSString *function_name;
@property (readonly) NSArray *inputAttachmentNames;
@property (readonly) NSArray *outputAttachmentNames;
@property (readonly) NSArray *groundTruthAttachmentNames;

- (id)init;
- (void).cxx_destruct;
- (void)loadFromDict:(id)a0 frameStorage:(id)a1;
- (id)getInputAttachment:(id)a0;
- (id)getOutputAttachment:(id)a0;
- (id)getGroundTruthAttachment:(id)a0;
- (id)getFunctionName;

@end
