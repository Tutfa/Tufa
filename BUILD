cc_library(
    name = "Decode",
    srcs = [
      "Decode.cpp"
    ],
    hdrs = [
      "Decode.h"
    ]
)

cc_binary(
  name = "Oss",
  srcs = ["Oss.cpp"],
  copts=[

  ],
  linkopts=[
    "-L/usr/local/lib",
  ],
  deps = [
    ":Decode",
  ],
)