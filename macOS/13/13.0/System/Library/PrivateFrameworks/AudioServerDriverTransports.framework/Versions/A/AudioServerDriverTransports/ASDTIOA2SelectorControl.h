@class NSString, NSDictionary, ASDTIOA2Device;

@interface ASDTIOA2SelectorControl : ASDSelectorControl <ASDTIOA2Control> {
    NSDictionary *_dictionary;
    ASDTIOA2Device *_ioa2Device;
}

@property (readonly, nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfSelectedValue;

- (void).cxx_destruct;
- (BOOL)changeValue:(unsigned int)a0;
- (void)setSelectedValue:(unsigned int)a0;
- (void)pushValue:(unsigned int)a0;
- (BOOL)synchronizeWithRegistry;
- (void)doSetValue:(unsigned int)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 isSettable:(BOOL)a2 forElement:(unsigned int)a3 inScope:(unsigned int)a4 dictionary:(id)a5;

@end
