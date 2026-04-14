@class NSString, NSPersonNameComponents;

@interface LPCollaborationHandle : NSObject

@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) NSPersonNameComponents *nameComponents;

- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 nameComponents:(id)a1;

@end
