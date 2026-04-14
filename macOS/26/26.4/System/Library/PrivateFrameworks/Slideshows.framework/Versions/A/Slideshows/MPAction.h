@class MCAction, NSObject;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSSecureCoding, NSCopying> {
    NSObject<MPActionSupport> *_parentObject;
    MCAction *_action;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject *targetObject;

+ (id)action;

- (void)setAction:(id)a0;
- (id)key;
- (id)parent;
- (void)setParent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)parentDocument;
- (void)configureTarget;

@end
