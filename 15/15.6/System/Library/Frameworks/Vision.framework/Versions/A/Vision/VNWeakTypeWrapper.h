@interface VNWeakTypeWrapper : NSObject {
    id _weakObject;
}

- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAndReturnError:(id *)a0;

@end
