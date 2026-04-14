@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

@interface NWConcrete_nw_http_request : NSObject <OS_nw_http_request> {
    NWConcrete_nw_http_field *method;
    NWConcrete_nw_http_field *scheme;
    NWConcrete_nw_http_field *authority;
    NWConcrete_nw_http_field *path;
    NWConcrete_nw_http_fields *fields;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
