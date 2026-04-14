@class NSString;

@interface NSCodableAttributeDescription : NSAttributeDescription

@property (copy) NSString *adapterName;

- (id)init;
- (id)decode:(id)a0 withRegistry:(id)a1 error:(id *)a2;
- (id)encode:(id)a0 withRegistry:(id)a1 error:(id *)a2;

@end
