@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithPath:(id)a0;
+ (id)descriptionWithFileURL:(id)a0;

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPath:(id)a0;
- (id)init;

@end
