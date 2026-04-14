@class NSString;

@interface _RKResponse : NSObject

@property (readonly) NSString *speechAct;
@property (readonly) NSString *headword;
@property (readonly) NSString *text;
@property (readonly) unsigned long long type;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpeechAct:(id)a0 headword:(id)a1 text:(id)a2;

@end
