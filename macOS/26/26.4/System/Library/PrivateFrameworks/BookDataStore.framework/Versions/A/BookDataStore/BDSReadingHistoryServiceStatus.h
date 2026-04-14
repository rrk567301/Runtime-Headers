@class NSString;

@interface BDSReadingHistoryServiceStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIsLoaded:(BOOL)a0;

@end
