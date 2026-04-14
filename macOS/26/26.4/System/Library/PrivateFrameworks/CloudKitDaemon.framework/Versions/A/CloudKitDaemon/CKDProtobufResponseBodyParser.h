@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (retain, nonatomic) Class messageClass;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (void)finishWithCompletion:(id /* block */)a0;
- (BOOL)_parseObjects:(BOOL)a0 group:(id)a1;
- (void)processData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQoS:(long long)a0 messageClass:(Class)a1 parsingStandaloneMessage:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)_parseObjectFromData:(id)a0 rawData:(id)a1 group:(id)a2;

@end
