@class NSString;

@interface BDSReadingHistoryServiceStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char isLoaded;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsLoaded:(char)a0;

@end
