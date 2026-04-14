@interface DUFoundInEvent : NSObject

- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (id)requestEventExtractionWithSerializedDocument:(id)a0 documentType:(long long)a1 options:(id)a2 error:(id *)a3;

@end
