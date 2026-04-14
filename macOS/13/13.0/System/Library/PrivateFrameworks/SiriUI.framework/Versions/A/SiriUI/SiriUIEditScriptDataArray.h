@class NSArray, NSString;

@interface SiriUIEditScriptDataArray : NSObject <EditScriptData>

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSString *cachedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)EditScriptDataWithString:(id)a0 chunkSize:(long long)a1;
+ (id)EditScriptDataWithArray:(id)a0;

- (long long)length;
- (id)initWithArray:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)stringAtIndex:(long long)a0;
- (long long)lengthOfItem:(long long)a0;
- (long long)characterIndexForItem:(long long)a0;
- (long long)indexOfFirstDifferenceWithOtherData:(id)a0 shouldReverseIterate:(BOOL)a1;
- (id)initWithString:(id)a0 chunkSize:(long long)a1;

@end
