@class NSDictionary, NSMutableDictionary, NSString;

@interface _POJWTBodyBase : NSObject <POJWTBody>

@property (retain) NSMutableDictionary *data;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithJWTData:(id)a0;

@end
