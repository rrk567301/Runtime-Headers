@class NSString;

@interface _RKResponse : NSObject

@property (readonly, copy) NSString *speechAct;
@property (readonly, copy) NSString *headword;
@property (readonly, copy) NSString *text;
@property (readonly) unsigned long long type;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithSpeechAct:(id)a0 headword:(id)a1 text:(id)a2;

@end
