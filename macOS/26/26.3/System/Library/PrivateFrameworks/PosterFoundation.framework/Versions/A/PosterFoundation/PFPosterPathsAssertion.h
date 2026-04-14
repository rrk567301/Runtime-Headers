@class NSArray, BSAction;

@interface PFPosterPathsAssertion : NSObject <NSSecureCoding> {
    BSAction *_invalidationAction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paths;

- (id)initWithPaths:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithPaths:(id)a0 invalidationAction:(id)a1;
- (id)initWithPaths:(id)a0 queue:(id)a1 invalidationHandler:(id /* block */)a2;
- (void)invalidateWithResponder:(id)a0;

@end
