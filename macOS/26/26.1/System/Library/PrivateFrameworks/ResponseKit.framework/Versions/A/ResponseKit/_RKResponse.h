@class NSString;

@interface _RKResponse : NSObject

@property (readonly, copy) NSString *speechAct;
@property (readonly, copy) NSString *headword;
@property (readonly, copy) NSString *text;
@property (readonly) unsigned long long type;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSpeechAct:(id)a0 headword:(id)a1 text:(id)a2;

@end
