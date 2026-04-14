@class NSArray;

@interface IOCEventFormatChangeRequest : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *changedProperties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChangedProperties:(id)a0;

@end
