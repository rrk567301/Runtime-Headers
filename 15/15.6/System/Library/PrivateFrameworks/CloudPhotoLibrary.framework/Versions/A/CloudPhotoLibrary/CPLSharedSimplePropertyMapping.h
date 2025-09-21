@class NSString;

@interface CPLSharedSimplePropertyMapping : NSObject <CPLSharedRecordPropertyMapping>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)shouldUpdatePropertyOnPrivateRecord:(id)a0 recordClass:(Class)a1;
- (char)shouldUpdatePropertyOnSharedRecord:(id)a0 recordClass:(Class)a1;

@end
