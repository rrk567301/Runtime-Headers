@interface TMMessageSerializer : NSObject

@property (readonly) Class messageClass;

- (void).cxx_destruct;
- (id)initWithMessageClass:(Class)a0;
- (BOOL)enumerateEntriesInFile:(id)a0 error:(id *)a1 enumerator:(id /* block */)a2;

@end
