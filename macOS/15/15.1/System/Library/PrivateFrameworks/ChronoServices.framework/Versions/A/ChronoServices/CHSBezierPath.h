@class NSString;

@interface CHSBezierPath : NSObject <BSXPCSecureCoding, NSCopying> {
    struct CGPath { } *_path;
}

@property (readonly, nonatomic) struct CGPath { } *cgPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCGPath:(struct CGPath { } *)a0;
- (id)_initWithCGPathNoCopy:(struct CGPath { } *)a0;

@end
