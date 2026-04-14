@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithFileURL:(id)a0;
+ (id)descriptionWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
