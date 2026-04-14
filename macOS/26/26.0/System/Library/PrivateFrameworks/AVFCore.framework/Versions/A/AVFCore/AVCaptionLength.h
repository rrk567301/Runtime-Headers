@class AVCaptionLengthInternal;

@interface AVCaptionLength : NSObject <NSCopying, NSSecureCoding> {
    AVCaptionLengthInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long unitType;
@property (readonly, nonatomic) long long numberOfCells;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCellCount:(long long)a0;

@end
