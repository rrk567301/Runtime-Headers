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
- (void)setParent:(id)a0;
- (id)parent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)key;
- (id)initWithCoder:(id)a0;
- (id)parentDocument;
- (void)configureTarget;

@end
