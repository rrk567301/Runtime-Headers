@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

@property (retain, nonatomic) NSMutableData *tailParserData;
@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) char isParsing;
@property (retain, nonatomic) Class messageClass;
@property (nonatomic) char parsingStandaloneMessage;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id /* block */)a0;
- (char)_parseObjectFromData:(id)a0 rawData:(id)a1 group:(id)a2;
- (char)_parseObjects:(char)a0 group:(id)a1;
- (id)initWithQoS:(long long)a0 messageClass:(Class)a1 parsingStandaloneMessage:(char)a2;
- (void)processData:(id)a0 completionHandler:(id /* block */)a1;

@end
