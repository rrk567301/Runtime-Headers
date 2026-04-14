@class NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_http_fields : NSObject <OS_nw_http_fields> {
    NSObject<OS_nw_array> *fields;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
