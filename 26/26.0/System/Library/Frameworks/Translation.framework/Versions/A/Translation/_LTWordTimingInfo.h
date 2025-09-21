@class NSString;

@interface _LTWordTimingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *word;
@property (nonatomic) unsigned int sampleIndex;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (readonly, copy, nonatomic) NSString *unredactedDescription;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
