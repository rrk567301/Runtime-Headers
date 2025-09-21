@class NSArray, NSMutableArray;

@interface MADMultiModalInput : NSObject <NSSecureCoding> {
    NSMutableArray *_segments;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *segments;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (char)_addPixelBuffer:(struct __CVBuffer { } *)a0 seed:(id)a1 error:(id *)a2;
- (char)addEntityUUID:(id)a0 error:(id *)a1;
- (char)addEntityUUID:(id)a0 seed:(unsigned long long)a1 error:(id *)a2;
- (char)addFaceprint:(id)a0 error:(id *)a1;
- (char)addPersonDescription:(id)a0 error:(id *)a1;
- (char)addPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)addPixelBuffer:(struct __CVBuffer { } *)a0 seed:(unsigned long long)a1 error:(id *)a2;
- (char)addText:(id)a0 error:(id *)a1;

@end
