@interface MDMClientConcreteDataProvider : NSObject <MDMClientDataProvider>

- (BOOL)isMDMProfileInstalled;
- (id)mdmDictionary;

@end
