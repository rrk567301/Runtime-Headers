@class NSString, NSData;

@interface PKExtendedAttribute : NSObject

@property (copy) NSString *name;
@property (copy) NSData *value;

- (id)description;
- (void)dealloc;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)setOnFileAtPath:(id)a0 option:(int)a1;

@end
