@interface SidecarResponse : SidecarRequest {
    _Atomic BOOL _accepted;
}

- (void)accept;
- (void)sendItems:(id)a0;
- (void)_willConnect;

@end
