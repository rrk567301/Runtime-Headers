@class NSURL, NSDate;

@interface SCUIReportSensitiveMedia : NSObject

@property (readonly) NSURL *url;
@property (readonly) long long kind;
@property (readonly, copy) NSDate *dateReceived;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 kind:(long long)a1 dateReceived:(id)a2;

@end
