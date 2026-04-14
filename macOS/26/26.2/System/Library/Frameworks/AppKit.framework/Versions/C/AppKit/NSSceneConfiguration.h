@interface NSSceneConfiguration : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* function */ delegateClass;
    void /* function */ sceneClass;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) Class delegateClass;
@property (nonatomic) Class sceneClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
