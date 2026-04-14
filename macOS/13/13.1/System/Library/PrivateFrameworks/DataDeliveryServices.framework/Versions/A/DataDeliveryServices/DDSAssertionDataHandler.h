@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

- (id)loadAssertionData;
- (void)saveAssertionData:(id)a0;
- (id)assertionContentDirectory;
- (id)assertionContentURL;

@end
