@class NSDictionary, _MRTranscriptAlignmentProtobuf;

@interface MRTranscriptAlignment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _MRTranscriptAlignmentProtobuf *protobuf;
@property (nonatomic) double playerStartTime;
@property (nonatomic) double playerEndTime;
@property (nonatomic) double referenceStartTime;
@property (nonatomic) double referenceEndTime;
@property (nonatomic) char matchedBeginning;
@property (nonatomic) char matchedEnd;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlayerStartTime:(double)a0 playerEndTime:(double)a1 referenceStartTime:(double)a2 referenceEndTime:(double)a3 matchedBeginning:(char)a4 matchedEnd:(char)a5;
- (id)initWithProtobuf:(id)a0;

@end
