@interface VNWeakTypeWrapper : NSObject {
    id _weakObject;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)objectAndReturnError:(id *)a0;

@end
