@class NSString, NSData, NSURL, NSNumber;

@interface FAScript : FAScriptableObject <NSSecureCoding> {
    NSURL *_url;
    NSNumber *_enabled;
}

@property (class, readonly) char supportsSecureCoding;

@property char isWorkflow;
@property char propagateChangesToFolderActionsDispatcher;
@property (retain) NSData *bookmark;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *hfsPath;
@property (retain, nonatomic) NSString *posixPath;
@property (retain, nonatomic) NSNumber *enabled;

+ (id)scriptWithURL:(id)a0;
+ (id)keyInContainer;
+ (id)scriptWithBookmark:(id)a0 name:(id)a1 enabled:(id)a2;
+ (id)scriptWithURL:(id)a0 enabled:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateName;
- (id)deleteVerb:(id)a0;
- (void)propagateNewURLOrSetScriptError:(id)a0;

@end
