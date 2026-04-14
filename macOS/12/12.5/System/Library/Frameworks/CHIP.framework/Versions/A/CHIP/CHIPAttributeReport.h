@class CHIPAttributePath, NSError;

@interface CHIPAttributeReport : NSObject

@property (readonly, nonatomic) CHIPAttributePath *path;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithPath:(const void *)a0 value:(id)a1 error:(id)a2;

@end
