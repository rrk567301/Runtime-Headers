@class NSString, NSDate;

@interface FileProviderDaemon.FPCKReportSection : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ phase;
    void /* unknown type, empty encoding */ date;
    void /* function */ build;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
