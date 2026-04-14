@class NSProgress;

@interface _DASActivityProgressWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSProgress *progress;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProgress:(id)a0;
- (id)ns;

@end
