@class NSArray, NSMutableArray;

@interface MADMultiModalInput : NSObject <NSSecureCoding> {
    NSMutableArray *_segments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *segments;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (BOOL)_addPixelBuffer:(struct __CVBuffer { } *)a0 seed:(id)a1 error:(id *)a2;
- (BOOL)addEntityUUID:(id)a0 error:(id *)a1;
- (BOOL)addEntityUUID:(id)a0 seed:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addFaceprint:(id)a0 error:(id *)a1;
- (BOOL)addPersonDescription:(id)a0 error:(id *)a1;
- (BOOL)addPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)addPixelBuffer:(struct __CVBuffer { } *)a0 seed:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addText:(id)a0 error:(id *)a1;

@end
