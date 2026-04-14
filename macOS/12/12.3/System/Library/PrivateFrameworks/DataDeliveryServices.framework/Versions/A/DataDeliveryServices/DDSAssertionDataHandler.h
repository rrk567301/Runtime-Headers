@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

- (id)assertionContentURL;
- (id)assertionContentDirectory;
- (id)loadAssertionData;
- (void)saveAssertionData:(id)a0;

@end
