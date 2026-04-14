@class NSString;

@interface ASUSQLiteDatabaseStoreDescriptor : NSObject

@property (retain) NSString *schemaName;
@property Class sessionClass;
@property Class transactionClass;

- (void).cxx_destruct;

@end
