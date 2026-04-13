@interface UNError : NSError

- (id)localizedDescription;
- (id)initWithData:(id)a0;
- (id)propertyListRepresentation;
- (id)initWithError:(int)a0 userInfo:(id)a1;

@end
