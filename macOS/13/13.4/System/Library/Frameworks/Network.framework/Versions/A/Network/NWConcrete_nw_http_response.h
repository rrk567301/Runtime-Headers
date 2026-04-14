@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

@interface NWConcrete_nw_http_response : NSObject <OS_nw_http_response> {
    NWConcrete_nw_http_field *status_field;
    char *reason_phrase;
    NWConcrete_nw_http_fields *fields;
    unsigned char reason_phrase_is_const : 1;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
