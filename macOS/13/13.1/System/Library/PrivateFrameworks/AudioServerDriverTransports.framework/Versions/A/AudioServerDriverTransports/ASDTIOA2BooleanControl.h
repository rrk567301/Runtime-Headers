@class NSString, NSDictionary, ASDTIOA2Device;

@interface ASDTIOA2BooleanControl : ASDBooleanControl <ASDTIOA2Control> {
    NSDictionary *_dictionary;
    ASDTIOA2Device *_ioa2Device;
}

@property (copy, nonatomic) id /* block */ setterBlock;
@property (readonly, nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (void)setValue:(BOOL)a0;
- (BOOL)changeValue:(BOOL)a0;
- (void)pushValue:(unsigned int)a0;
- (BOOL)synchronizeWithRegistry;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 element:(unsigned int)a3 scope:(unsigned int)a4 objectClassID:(unsigned int)a5 dictionary:(id)a6;
- (void)doSetValue:(BOOL)a0;

@end
