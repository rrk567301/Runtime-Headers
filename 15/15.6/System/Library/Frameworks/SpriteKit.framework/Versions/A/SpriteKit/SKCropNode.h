@class SKNode;

@interface SKCropNode : SKNode {
    SKNode *_mask;
    void *_skcCropNode;
}

@property (nonatomic) char prefersAlphaMask;
@property (nonatomic) char invertMask;
@property (retain, nonatomic) SKNode *maskNode;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)useAlphaMask:(char)a0;

@end
